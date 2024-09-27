package com.example.fragments2.fragment

import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import com.example.fragments2.R
import com.example.fragments2.databinding.FragmentBottomBinding
import com.example.fragments2.databinding.FragmentTopBinding

class TopFragment : Fragment() {
    private lateinit var binding: FragmentTopBinding
    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        binding = FragmentTopBinding
            .inflate(inflater,container,false)
        binding.textView2.text = "Soy el top"
        // Inflate the layout for this fragment
        return binding.root
    }

}