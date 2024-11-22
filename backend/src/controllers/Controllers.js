import { getDados, registraTemperatura } from "../models/Models.js";

export async function principal (req, res)
    {
        const dados = await getDados();
        res.status(200).json({dados})
        
    }
export async function inserirNovaTemperatura (req, res)
    {
        const newDadosTemperatura = req.body;
        try{
            const temperaturaRegistrada = await registraTemperatura(newDadosTemperatura);
            res.status(200).json(temperaturaRegistrada);
        }catch(erro){
            console.error(erro.message);
            res.status(500).json({"Erro":"Falha na requisição"})
        }
        
    }