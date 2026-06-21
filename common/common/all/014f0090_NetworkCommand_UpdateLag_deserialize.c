// addr: 0x014f0090
// name: NetworkCommand_UpdateLag_deserialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NetworkCommand_UpdateLag_deserialize(void * this, void * stream) */

bool __thiscall NetworkCommand_UpdateLag_deserialize(void *this,void *stream)

{
  char cVar1;
  char extraout_AL;
  undefined1 uVar2;
  uint uVar3;
  void *local_4;
  
                    /* Deserializes a NetworkCommand_UpdateLag object by reading common
                       NetworkCommand data and an int-pair vector field. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    NetworkCommand_deserializeTemplate(this,stream);
    if (extraout_AL != '\0') {
      local_4 = stream;
      uVar3 = Game_deserializeIntPairVector_01300190(&local_4,(void *)((int)this + 4));
      if ((char)uVar3 != '\0') {
        uVar2 = (**(code **)(*(int *)this + 0x14))(stream);
        return (bool)uVar2;
      }
    }
  }
  return false;
}

