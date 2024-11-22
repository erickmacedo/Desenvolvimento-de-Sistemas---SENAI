import express from "express";
import { inserirNovaTemperatura, principal} from "../controllers/Controllers.js";

const routes = (app) =>{
    app.use(express.json());
    
    app.get('/api', principal);

    app.post('/inserir/temperatura', inserirNovaTemperatura);

}

export default routes;

