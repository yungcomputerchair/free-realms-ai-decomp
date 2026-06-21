// addr: 0x01491d40
// name: RepeatExpression_deserialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool RepeatExpression_deserialize(void * this, void * stream) */

bool __thiscall RepeatExpression_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a RepeatExpression using the common binary-expression child
                       deserializer between stream begin/end calls. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    bVar2 = BinaryExpression_deserialize(this,stream_00);
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(stream_00);
      return (bool)uVar3;
    }
  }
  return false;
}

