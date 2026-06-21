// addr: 0x01342250
// name: PlayElement_removeSuppressEffect
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PlayElement_removeSuppressEffect(void * this, void * valueData) */

void __thiscall PlayElement_removeSuppressEffect(void *this,void *valueData)

{
  int iVar1;
  
                    /* Removes a suppress-effect entry from a PlayElement for supported ValueData
                       types and logs when the input type is unsupported. */
  iVar1 = *(int *)((int)valueData + 4);
  if (iVar1 == 2) {
    FUN_01341ec0();
    return;
  }
  if (iVar1 != 3) {
    Game_logGeneral(*(void **)((int)this + 0x30),
                    "PlayElement::removeSuppressEffect(valueData) couldn\'t get type: %d",iVar1);
  }
  return;
}

