// addr: 0x014ed810
// name: CommandObject_deserializeTemplateAndString_alt
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeTemplateAndString_alt(void * this, void *
   reader) */

bool __thiscall CommandObject_deserializeTemplateAndString_alt(void *this,void *reader)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Runs hooks, deserializes command template/base, then reads a string field. */
  this_00 = reader;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if (cVar1 != '\0') {
    cVar1 = FUN_01407cf0(this_00);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readString(this_00,(void *)((int)this + 8));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

