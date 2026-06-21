// addr: 0x01442fe0
// name: LoginCommand_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LoginCommand_deserialize(void * this, void * stream) */

bool __thiscall LoginCommand_deserialize(void *this,void *stream)

{
  void *reader;
  char cVar1;
  char extraout_AL;
  undefined1 uVar2;
  
                    /* Deserializes a LoginCommand-like object from the stream. It opens a read
                       scope via vfunc +0x10, deserializes the NetworkCommand/base payload with
                       FUN_0140c2a0, then closes the scope via vfunc +0x14. */
  reader = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    NetworkCommand_deserializeTemplate(this,reader);
    if (extraout_AL != '\0') {
      uVar2 = (**(code **)(*(int *)this + 0x14))(reader);
      return (bool)uVar2;
    }
  }
  return false;
}

