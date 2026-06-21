// addr: 0x01442780
// name: FUN_01442780
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NetworkCommand_deserializeTwoCommonFields(void * this, void * stream) */

bool __thiscall NetworkCommand_deserializeTwoCommonFields(void *this,void *stream)

{
  void *reader;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a NetworkCommand template and two common fields between virtual
                       begin/end hooks. */
  reader = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    NetworkCommand_deserializeTemplate(this,reader);
    if (extraout_AL != '\0') {
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 4));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 8));
        if (bVar2) {
          uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

