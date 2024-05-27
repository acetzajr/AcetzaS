#pragma once

#include "Muza/Blocks/Block.h"
#include "Muza/Types.h"
#include "Muza/Wave.h"

typedef struct {
  MzBlockZ *blockM;
  MzAttackT attackM;
  MzHoldT holdM;
  MzDecayT decayM;
  MzSustainT sustainM;
  MzReleaseT releaseM;
  MzTransformerFT attackTransformerM;
  MzTransformerFT decayTransformerM;
  MzTransformerFT releaseTransformerM;
} MzEnveloperZ;

extern MzEnveloperZ MzEnveloperG;

void MzEnveloperCopyF(MzEnveloperZ *enveloperP, MzEnveloperZ *fromP);

void MzEnveloperWaveF(MzEnveloperZ *enveloperP, MzWaveZ *waveP);

MzFrequencyT MzEnveloperFrequencyF(MzEnveloperZ *enveloperP);

void MzEnveloperSetFrequencyF(MzEnveloperZ *enveloperP,
                              MzFrequencyT frequencyP);

void MzEnveloperSetDurationF(MzEnveloperZ *enveloperP, MzDurationT durationP);
