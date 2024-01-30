# UE5-sonic-boilerplate
Procedural sound systems in UE5 | boilerplate blueprints and research.

---
This repository exemplifies basic concepts for developing sound and music systems with MetaSounds and it is meant to serve as a spring board for further experimentation. The assets featured here build upon content available in the Epic Unreal Engine learning community, namely Matt Spendlove's introductory tutorial series and accompanying repository.

- [Intro to MetaSounds tutorial series by Matt Spendlove](https://dev.epicgames.com/community/learning/tutorials/Kw7l/unreal-engine-metasounds)
- [Intro to MetaSounds GitHub repo](https://github.com/msp/6070-intro-to-metasounds)
# Repo structure:

> **sonicBoilerplate** | This is the UE5 project folder containing the game environments and all the MetaSound blueprints, sources, and patches exemplified.
> 
>>**Content** | This is the main content folder present in all UE projects.
>>
>>> **01_HelloWorld** | All example node graphs (sources and patches) are contained in numbered folders like this one with sub-folders for each asset type.
>>> 
>>> > **MetaSounds** | This folder contains the MetaSounds *Sources* for each example.
>>> > 
>>> > **Patches** | This Folder contains the MetaSounds *Patches* for each example (used within the sources).
>>> > 
>>> > **Blueprints** | This folder contains the Blueprints for each example (which make use of the MetaSound Sources).
>>> > 
>>> ...

All node graph examples are explained in more detail in the section that follows.
# MetaSounds examples:

## 01_HelloWorld

![Nodez](./Screenshots/SonicB_HelloWorld.png)
## 02_SampleBased-WavePlayer

![Nodez](./Screenshots/SonicB_WavePlayer.png)
## 03_SampleBased-SampleVariation

![Nodez](./Screenshots/SonicB_SampleVariation.png)

![Nodez](./Screenshots/SonicB_SampleVarWeights.png)
## 04_Sythesis

![Nodez](./Screenshots/SonicB_SubtractiveSynth.png)

![Nodez](./Screenshots/SonicB_MonoSynth.png)
## 08_SampleBased-Tempo

![Nodez](./Screenshots/SonicB_SamplePlayerBPM.png)

![Nodez](./Screenshots/SonicB_MultiSampleTrackPlayer.png)

![Nodez](./Screenshots/SonicB_MultiWaveMixer_01.png)

![Nodez](./Screenshots/SonicB_MultiWaveMixer_02.png)

## EightTrackPlayer_BP

![Nodez](./Screenshots/SonicB_8trackPlayerBP.png)

![Nodez](./Screenshots/SonicB_8trackPlayerSource.png)
