// addr: 0x01435520
// name: NetworkCommand_deserializeWithNestedCommand
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NetworkCommand_deserializeWithNestedCommand(void * this, void * reader)
    */

bool __thiscall NetworkCommand_deserializeWithNestedCommand(void *this,void *reader)

{
  void *reader_00;
  char cVar1;
  char extraout_AL;
  undefined1 uVar2;
  
                    /* Deserialize wrapper that reads this command, invokes the common
                       NetworkCommand_deserializeTemplate for nested/base command data, then
                       finalizes through vtable+0x14. */
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

