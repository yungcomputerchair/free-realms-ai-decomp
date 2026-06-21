// addr: 0x0149c990
// name: DivideRoundExpression_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint DivideRoundExpression_deserialize(int * this, void * serializer) */

uint __thiscall DivideRoundExpression_deserialize(void *this,void *serializer)

{
  code *pcVar1;
  char extraout_AL;
  bool bVar2;
  uint3 extraout_var;
  uint3 uVar4;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint uVar3;
  void *local_4;
  
                    /* Deserializes DivideRoundExpression by reading the ExpressionTreeNode base and
                       one integer flag, storing the flag as a boolean at this+0x24. */
  local_4 = this;
  (**(code **)(*(int *)this + 0x10))(serializer,&local_4);
  uVar4 = extraout_var;
  if (extraout_AL != '\0') {
    bVar2 = BinaryExpression_deserialize(this,serializer);
    uVar4 = extraout_var_00;
    if (bVar2) {
      bVar2 = Deserializer_readInteger(serializer,(int *)&local_4);
      uVar4 = extraout_var_01;
      if (bVar2) {
        pcVar1 = *(code **)(*(int *)this + 0x14);
        *(bool *)((int)this + 0x24) = local_4 != (void *)0x0;
        uVar3 = (*pcVar1)(serializer);
        return uVar3;
      }
    }
  }
  return (uint)uVar4 << 8;
}

