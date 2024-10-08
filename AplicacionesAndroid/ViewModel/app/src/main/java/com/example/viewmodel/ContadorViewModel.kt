package com.example.viewmodel

import android.os.CountDownTimer
import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel

class ContadorViewModel: ViewModel() {

    private lateinit var counter: CountDownTimer

    // NO contextos y encapsulados
    private val _segundos = MutableLiveData<Int>()
    private val _isFinished = MutableLiveData<Boolean>()
    val startTime = MutableLiveData<Int>()

    val seconds: LiveData<Int> = _segundos
    val isFinished: LiveData<Boolean> = _isFinished

    //Si detecta un cambio lo notifica
    /*public fun seconds(): LiveData<Int>{
        return _segundos;
    }*/

    fun startTimer(){
        counter = object : CountDownTimer(startTime.value!!.times(1000L), 1000){
            override fun onTick(p0: Long) {
                _segundos.value = (p0/1000).toInt()
            }

            override fun onFinish() {
                _isFinished.value = true
            }
        }.start()
    }

    fun stopTimer(){
        counter.cancel()
    }
}