package com.example.viewmodel

import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.lifecycle.ViewModelProvider
import com.example.viewmodel.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        enableEdgeToEdge()
        setContentView(binding.root)

        var viewModel = ViewModelProvider(this)[MainActivityViewModel::class.java]
        binding.txtNumber.text = viewModel.num.toString()

        //var num = 0
        binding.btnClick.setOnClickListener{
            viewModel.aumentarNumero()
            binding.txtNumber.text = viewModel.num.toString()

        }

    }
}