// addr: 0x01499980
// name: HasPropertyExpression_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint HasPropertyExpression_deserialize(int * this, void * serializer) */

uint __thiscall HasPropertyExpression_deserialize(void *this,void *serializer)

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
  
                    /* Deserializes HasPropertyExpression by opening a serializer chunk, reading the
                       ExpressionTreeNode base, then reading two integer fields into this+0x24 and
                       this+0x28 before closing the chunk. */
  (**(code **)(*(int *)this + 0x10))(serializer,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = BinaryExpression_deserialize(this,serializer);
    uVar3 = extraout_var_00;
    if (bVar1) {
      bVar1 = Deserializer_readInteger(serializer,&local_4);
      uVar3 = extraout_var_01;
      if (bVar1) {
        *(int *)((int)this + 0x24) = local_4;
        bVar1 = Deserializer_readInteger(serializer,(int *)&stack0xfffffff0);
        uVar3 = extraout_var_02;
        if (bVar1) {
          *(undefined4 *)((int)this + 0x28) = unaff_EDI;
          uVar2 = (**(code **)(*(int *)this + 0x14))(serializer);
          return uVar2;
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

