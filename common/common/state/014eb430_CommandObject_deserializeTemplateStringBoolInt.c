// addr: 0x014eb430
// name: CommandObject_deserializeTemplateStringBoolInt
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObject_deserializeTemplateStringBoolInt(void * this, void *
   reader) */

bool __thiscall CommandObject_deserializeTemplateStringBoolInt(void *this,void *reader)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 unaff_EDI;
  int local_4;
  
                    /* Runs hooks, deserializes command template/base, reads a string, one boolean,
                       and one integer. */
  cVar2 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar2 != '\0') {
    cVar2 = FUN_01407cf0(reader);
    if (cVar2 != '\0') {
      bVar3 = Deserializer_readString(reader,(void *)((int)this + 8));
      if (bVar3) {
        bVar3 = Deserializer_readInteger(reader,&local_4);
        if (bVar3) {
          *(bool *)((int)this + 0x24) = local_4 != 0;
          bVar3 = Deserializer_readInteger(reader,(int *)&stack0xfffffff0);
          if (bVar3) {
            pcVar1 = *(code **)(*(int *)this + 0x14);
            *(undefined4 *)((int)this + 0x28) = unaff_EDI;
            uVar4 = (*pcVar1)(reader);
            return (bool)uVar4;
          }
        }
      }
    }
  }
  return false;
}

