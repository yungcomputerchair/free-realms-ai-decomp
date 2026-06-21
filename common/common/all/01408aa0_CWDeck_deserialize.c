// addr: 0x01408aa0
// name: CWDeck_deserialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWDeck_deserialize(void * this, void * stream) */

bool __thiscall CWDeck_deserialize(void *this,void *stream)

{
  void *pvVar1;
  char cVar2;
  undefined1 uVar3;
  
                    /* Deserializes a CWDeck by reading the base component and then the
                       deck-specific vector at offset 8. */
  pvVar1 = stream;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar2 != '\0') {
    cVar2 = FUN_01407cf0(pvVar1);
    if (cVar2 != '\0') {
      cVar2 = FUN_012faf70(pvVar1,(int)this + 8);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*(int *)this + 0x14))(pvVar1);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

