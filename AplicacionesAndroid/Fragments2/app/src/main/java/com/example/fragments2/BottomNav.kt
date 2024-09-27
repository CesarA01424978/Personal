package com.example.fragments2

import android.os.Bundle
import androidx.activity.enableEdgeToEdge
import androidx.appcompat.app.AppCompatActivity
import androidx.core.view.ViewCompat
import androidx.core.view.WindowInsetsCompat
import androidx.navigation.fragment.NavHostFragment
import androidx.navigation.ui.setupWithNavController
import com.example.fragments2.databinding.ActivityBottomNavBinding
import com.example.fragments2.databinding.FragmentBottomBinding

class BottomNav : AppCompatActivity() {
    private lateinit var binding: ActivityBottomNavBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        //enableEdgeToEdge()  //quita el color morado de arriba y se extiende
        binding = ActivityBottomNavBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val navHostFragment =
            supportFragmentManager.findFragmentById(binding.fragmentContainerView2.id) as NavHostFragment
        val navControler = navHostFragment.navController
        binding.bottomNavigationView.setupWithNavController(navControler)

    }
}