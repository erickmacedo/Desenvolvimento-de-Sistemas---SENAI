import conectarAoBanco from "../config/database.js";
const connection = await conectarAoBanco(process.env.STRING_CONEXAO);
const db = connection.db("projeto-monitoramento");

export async function getDados(){    
    const coltemp = db.collection("temperatura");
    return coltemp.find().toArray();
}

export async function registraTemperatura(dadosTemperatura) {
    const colecao = db.collection("temperatura");
    return colecao.insertOne(dadosTemperatura);
    
}