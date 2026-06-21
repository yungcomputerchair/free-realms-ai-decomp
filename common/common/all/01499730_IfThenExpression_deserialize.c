// addr: 0x01499730
// name: IfThenExpression_deserialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool IfThenExpression_deserialize(void * this, void * stream) */

bool __thiscall IfThenExpression_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes an IfThenExpression by reading the common binary expression
                       fields and an additional expression pointer at offset 0x24. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    bVar2 = BinaryExpression_deserialize(this,stream_00);
    if (bVar2) {
      bVar2 = PersistentComponent_deserializePointer(stream_00,(void *)((int)this + 0x24));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(stream_00);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

