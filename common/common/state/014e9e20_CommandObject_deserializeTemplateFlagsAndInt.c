// addr: 0x014e9e20
// name: CommandObject_deserializeTemplateFlagsAndInt
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeTemplateFlagsAndInt(void * this, void * reader)
    */

bool __thiscall CommandObject_deserializeTemplateFlagsAndInt(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined4 unaff_ESI;
  int unaff_EDI;
  int local_4;
  
                    /* Runs hooks, deserializes base, reads two boolean flags and an integer field.
                        */
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    cVar1 = FUN_01407cf0(reader);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readInteger(reader,&local_4);
      if (bVar2) {
        *(bool *)((int)this + 8) = local_4 != 0;
        bVar2 = Deserializer_readInteger(reader,(int *)&stack0xffffffec);
        if (bVar2) {
          *(bool *)((int)this + 9) = unaff_EDI != 0;
          bVar2 = Deserializer_readInteger(reader,(int *)&stack0xfffffff0);
          if (bVar2) {
            *(undefined4 *)((int)this + 0xc) = unaff_ESI;
            uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
            return (bool)uVar3;
          }
        }
      }
    }
  }
  return false;
}

