// addr: 0x0139dc00
// name: PlayArea_deserializeRemovedPlayElement
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PlayArea_deserializeRemovedPlayElement(void * this, void * stream) */

bool __thiscall PlayArea_deserializeRemovedPlayElement(void *this,void *stream)

{
  void *element;
  char cVar1;
  char extraout_AL;
  undefined1 uVar2;
  
                    /* Deserializes a PlayElement from the stream transactionally, removes it from
                       the PlayArea, and commits the stream if both operations succeed. */
  element = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    PlayArea_removePlayElement(this,element);
    if (extraout_AL != '\0') {
      uVar2 = (**(code **)(*(int *)this + 0x14))(element);
      return (bool)uVar2;
    }
  }
  return false;
}

