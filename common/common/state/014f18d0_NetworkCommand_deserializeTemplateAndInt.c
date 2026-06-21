// addr: 0x014f18d0
// name: NetworkCommand_deserializeTemplateAndInt
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NetworkCommand_deserializeTemplateAndInt(void * this, void * reader) */

bool __thiscall NetworkCommand_deserializeTemplateAndInt(void *this,void *reader)

{
  void *reader_00;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Runs hooks, calls NetworkCommand_deserializeTemplate, then reads one integer
                       field. */
  reader_00 = reader;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if (cVar1 != '\0') {
    NetworkCommand_deserializeTemplate(this,reader_00);
    if (extraout_AL != '\0') {
      bVar2 = Deserializer_readInteger(reader_00,(int *)((int)this + 4));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(reader_00);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

