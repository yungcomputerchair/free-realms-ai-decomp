// addr: 0x01442360
// name: NetworkCommand_deserializeWithHooks
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NetworkCommand_deserializeWithHooks(void * this, void * reader) */

bool __thiscall NetworkCommand_deserializeWithHooks(void *this,void *reader)

{
  void *reader_00;
  char cVar1;
  char extraout_AL;
  undefined1 uVar2;
  
                    /* Runs a virtual pre-deserialize hook, calls
                       NetworkCommand_deserializeTemplate, then runs a virtual post-deserialize
                       hook. Returns false if any step fails. */
  reader_00 = reader;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if (cVar1 != '\0') {
    NetworkCommand_deserializeTemplate(this,reader_00);
    if (extraout_AL != '\0') {
      uVar2 = (**(code **)(*(int *)this + 0x14))(reader_00);
      return (bool)uVar2;
    }
  }
  return false;
}

