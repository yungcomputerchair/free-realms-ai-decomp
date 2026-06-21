// addr: 0x0148deb0
// name: SumExpression_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint SumExpression_deserialize(int * this, void * reader) */

uint __thiscall SumExpression_deserialize(void *this,void *reader)

{
  char extraout_AL;
  bool bVar1;
  uint3 extraout_var;
  uint3 uVar3;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint uVar2;
  undefined4 unaff_EDI;
  int local_4;
  
                    /* Deserializes SumExpression by opening the stream record, delegating to the
                       expression base reader, then reading the PlayArea and Key integer fields
                       before closing the record. */
  (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = BinaryExpression_deserialize(this,reader);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(reader,&local_4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        *(int *)((int)this + 0x24) = local_4;
        bVar1 = Deserializer_readInteger(reader,(int *)&stack0xfffffff0);
        uVar3 = extraout_var_02;
        if (bVar1) {
          *(undefined4 *)((int)this + 0x28) = unaff_EDI;
          uVar2 = (**(code **)(*(int *)this + 0x14))(reader);
          return uVar2;
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

