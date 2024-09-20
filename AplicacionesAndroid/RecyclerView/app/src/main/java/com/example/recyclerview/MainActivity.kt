package com.example.recyclerview

import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import androidx.recyclerview.widget.LinearLayoutManager
import com.example.recyclerview.adapter.PostreAdapter
import com.example.recyclerview.databinding.ActivityMainBinding
import com.example.recyclerview.model.Postre

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val lista = listOf(
            Postre("Tarta", "Normal", R.drawable.descarga1),
            Postre("Flan", "Dos leches", R.drawable.descarga2),
            Postre("Pastel", "tres leches", R.drawable.descarga3),
            Postre("Pai xd", "cuatro leches", R.drawable.descarga4),
            Postre("Postre 5", "cien leches", R.drawable.descarga5)
        )

        val adaptador = PostreAdapter(lista)

        binding.rvLista.layoutManager = LinearLayoutManager(this) //Vertical
        binding.rvLista.adapter = adaptador
    }
}