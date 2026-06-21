// addr: 0x00beb930
// name: BackgroundAudioComponent_getTypeName
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * BackgroundAudioComponent_getTypeName(void * this) */

char * __fastcall BackgroundAudioComponent_getTypeName(void *this)

{
  uint uVar1;
  char *pcVar2;
  bool bVar3;
  
                    /* Chooses between 'Music(Background)' and 'Sound(Background)' based on a
                       flag/value at this+0x3c. */
  uVar1 = *(uint *)((int)this + 0x3c) & 0x80000001;
  bVar3 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar3 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  pcVar2 = "Music(Background)";
  if (!bVar3) {
    pcVar2 = "Sound(Background)";
  }
  return pcVar2;
}

