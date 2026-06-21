// addr: 0x014f1d40
// name: NetworkCommand_QueryDisconnect_deserialize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NetworkCommand_QueryDisconnect_deserialize(void * this, void * stream) */

bool __thiscall NetworkCommand_QueryDisconnect_deserialize(void *this,void *stream)

{
  void *reader;
  char cVar1;
  char extraout_AL;
  undefined1 uVar2;
  
                    /* Deserializes a no-payload QueryDisconnect network command by wrapping the
                       base NetworkCommand deserialize with stream begin/end calls. */
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

