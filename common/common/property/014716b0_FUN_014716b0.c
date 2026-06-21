// addr: 0x014716b0
// name: FUN_014716b0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool DoublePassState_deserializeLoopState(void * this, void * stream) */

bool __thiscall DoublePassState_deserializeLoopState(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_ESI;
  int unaff_EDI;
  int local_4;
  
                    /* Deserializes many DoublePassState fields through serializer helpers and a
                       nested object, including booleans and optional trailing state. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    bVar2 = StateMachineState_deserializeWithPlayer(this,stream);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0xf8));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0xfc));
        if (bVar2) {
          bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x100));
          if (bVar2) {
            bVar2 = Deserializer_readInteger(stream,&local_4);
            if (bVar2) {
              *(int *)((int)this + 0x104) = local_4;
              bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffec);
              if (bVar2) {
                *(int *)((int)this + 0x108) = unaff_EDI;
                cVar1 = (**(code **)(*(int *)((int)this + 0x10c) + 0x24))(stream);
                if (cVar1 != '\0') {
                  bVar2 = Deserializer_readInteger(stream,(int *)((int)this + 0x118));
                  if (bVar2) {
                    bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffec);
                    if (bVar2) {
                      *(bool *)((int)this + 0x11c) = unaff_EDI != 0;
                      if (1 < unaff_ESI) {
                        Deserializer_readInteger(stream,(int *)((int)this + 0x120));
                      }
                      uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
                      return (bool)uVar3;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}

