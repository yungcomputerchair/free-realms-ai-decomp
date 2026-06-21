// addr: 0x014983a0
// name: QueryNode_deserializeWithFlag
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool QueryNode_deserializeWithFlag(void * this, void * stream) */

bool __thiscall QueryNode_deserializeWithFlag(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_EDI;
  int local_4;
  
                    /* Deserializes a QueryNode variant with an integer field and boolean flag, then
                       commits. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    cVar1 = FUN_01494230(stream);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readInteger(stream,&local_4);
      if (bVar2) {
        *(int *)((int)this + 0x1c) = local_4;
        bVar2 = Deserializer_readInteger(stream,(int *)&stack0xfffffff0);
        if (bVar2) {
          *(uint *)((int)this + 0x20) = (uint)(unaff_EDI != 0);
          uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

