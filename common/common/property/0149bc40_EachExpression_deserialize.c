// addr: 0x0149bc40
// name: EachExpression_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint EachExpression_deserialize(int * this, void * serializer) */

uint __thiscall EachExpression_deserialize(void *this,void *serializer)

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
  
                    /* Deserializes EachExpression by reading two integer fields, then deserializing
                       the ExpressionTreeNode base and closing the serializer chunk. */
  (**(code **)(*(int *)this + 0x10))(serializer,&local_4);
  uVar3 = extraout_var;
  if (extraout_AL != '\0') {
    bVar1 = Deserializer_readInteger(serializer,&local_4);
    uVar3 = extraout_var_00;
    if (bVar1) {
      *(int *)((int)this + 0x24) = local_4;
      bVar1 = Deserializer_readInteger(serializer,(int *)&stack0xfffffff0);
      uVar3 = extraout_var_01;
      if (bVar1) {
        *(undefined4 *)((int)this + 0x28) = unaff_EDI;
        bVar1 = BinaryExpression_deserialize(this,serializer);
        uVar3 = extraout_var_02;
        if (bVar1) {
          uVar2 = (**(code **)(*(int *)this + 0x14))(serializer);
          return uVar2;
        }
      }
    }
  }
  return (uint)uVar3 << 8;
}

