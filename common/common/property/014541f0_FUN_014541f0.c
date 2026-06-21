// addr: 0x014541f0
// name: FUN_014541f0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool FUN_014541f0(void * this, void * stream) */

bool __thiscall FUN_014541f0(void *this,void *stream)

{
  void *reader;
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  
                    /* Deserializes a scoped object using FUN_0148deb0 for the nested payload. It
                       uses the common vfunc +0x10 begin and vfunc +0x14 finish sequence. */
  reader = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    uVar3 = SumExpression_deserialize(this,reader);
    if ((char)uVar3 != '\0') {
      uVar2 = (**(code **)(*(int *)this + 0x14))(reader);
      return (bool)uVar2;
    }
  }
  return false;
}

