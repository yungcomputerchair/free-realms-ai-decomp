// addr: 0x0149b0b0
// name: BinaryExpression_deserialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool BinaryExpression_deserialize(void * this, void * stream) */

bool __thiscall BinaryExpression_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a BinaryExpression by reading the base Expression and two child
                       expression pointers. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    cVar1 = FUN_01494230(stream_00);
    if (cVar1 != '\0') {
      bVar2 = PersistentComponent_deserializePointer(stream_00,(void *)((int)this + 0x1c));
      if (bVar2) {
        bVar2 = PersistentComponent_deserializePointer(stream_00,(void *)((int)this + 0x20));
        if (bVar2) {
          uVar3 = (**(code **)(*(int *)this + 0x14))(stream_00);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

