import mqtt from 'mqtt';
import axios from 'axios';

export function connectionMQTT() {

// Conecte-se ao broker test.mosquitto.org
const client = mqtt.connect('mqtt://test.mosquitto.org');

// Nome do tópico a ser escutado
const topic = 'equipe2/temperatura';

// Quando conectado ao broker
client.on('connect', () => {
  console.log(`Conectado ao broker MQTT no tópico "${topic}"`);

  // Inscreva-se no tópico 'jorgenerico' para receber mensagens
  client.subscribe(topic, (err) => {
    if (err) {
      console.error(`Erro ao se inscrever no tópico: ${err.message}`);
    } else {
      console.log(`Inscrito com sucesso no tópico: "${topic}"`);
    }
  });
});

// Quando uma mensagem é recebida no tópico 'jorgenerico'
client.on('message', async (topic, message) => {
  console.log(`Mensagem recebida no tópico "${topic}": ${message.toString()}`);

  if(topic == "equipe2/temperatura"){
        try {
            const valor = message.toString();
            console.log(valor);
            const response = await axios.post('http://localhost:3000/inserir/temperatura', {valor});
      
          console.log('Resposta do servidor:', response.data);
        } catch (error) {
          console.error('Erro ao fazer o POST:', error);
        }       
  }


});


// Lide com erros de conexão
client.on('error', (error) => {
  console.error(`Erro de conexão: ${error}`);
});

}

export default connectionMQTT