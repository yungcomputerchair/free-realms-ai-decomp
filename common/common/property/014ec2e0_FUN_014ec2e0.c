// addr: 0x014ec2e0
// name: FUN_014ec2e0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool AccountCommand_deserializeStringAndInts(void * this, void * stream) */

bool __thiscall AccountCommand_deserializeStringAndInts(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_EDI;
  void *local_4;
  
                    /* Deserializes an account command with common command fields, a string field,
                       and integer fields. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if ((((cVar1 != '\0') && (cVar1 = FUN_01407cf0(stream), cVar1 != '\0')) &&
      (bVar2 = Deserializer_readString(stream,(void *)((int)this + 8)), bVar2)) &&
     ((cVar1 = FUN_012faf70(stream,(int)this + 0x44), cVar1 != '\0' &&
      (bVar2 = Deserializer_readInteger(stream,(int *)&local_4), bVar2)))) {
    *(void **)((int)this + 0x40) = local_4;
    if ((1 < unaff_EDI) &&
       (bVar2 = Deserializer_readString(stream,(void *)((int)this + 0x24)), !bVar2)) {
      return false;
    }
    uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
    return (bool)uVar3;
  }
  return false;
}

