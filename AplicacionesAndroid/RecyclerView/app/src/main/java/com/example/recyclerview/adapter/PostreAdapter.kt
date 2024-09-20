package com.example.recyclerview.adapter

import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.recyclerview.widget.RecyclerView
import com.example.recyclerview.databinding.LayoutPostreBinding
import com.example.recyclerview.model.Postre

// Los adapter tienen: Contexto:componente para desplegar, layot y datos
class PostreAdapter(val datos: List<Postre>):
    RecyclerView.Adapter<PostreAdapter.ViewHolder>() { //poner la clase y el holder

        class ViewHolder(val binding: LayoutPostreBinding):
                RecyclerView.ViewHolder(binding.root){}

    // La infla (instancia la vista)
    override fun onCreateViewHolder(parent: ViewGroup, viewType: Int): ViewHolder {
        return ViewHolder(LayoutPostreBinding.inflate(LayoutInflater.from(parent.context), //Busca el contexto de su padre
            parent, false)) // para no sobreponerlos y que se vean dezplagados

    }

    //Obtiene el num de elementos
    override fun getItemCount(): Int {
        return datos.size
    }

    // Rellena con datos
    override fun onBindViewHolder(holder: ViewHolder, position: Int) {
        val elementos = datos[position] //obtiene el elemento
        with(holder.binding){
            txtNombre.text = elementos.nombre
            txtDescripcion.text = elementos.descripcion
            imgImagen.setImageResource(elementos.imagen)
        }
    }
}

