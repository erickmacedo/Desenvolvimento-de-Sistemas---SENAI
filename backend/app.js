import express from "express";
import routes from "./src/routes/postRoutes.js";
import connectionMQTT from "./src/config/mqtt.js";

const app = express ();
const port = 3000;

routes(app);
connectionMQTT();



app.listen(port, ()=>{
    console.log(`Servidor Ativo na porta ${port}`)
})
