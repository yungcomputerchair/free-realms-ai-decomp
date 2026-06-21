// addr: 0x013ce4f0
// name: FUN_013ce4f0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013ce4f0(int *param_1,int param_2)

{
  void *this;
  
                    /* Serializes/dumps an object with four strings, several booleans/integers, and
                       an int-pair vector, bracketed by virtual begin/end serializer calls. No
                       string literal, RTTI, or named caller identifies the class. */
  if (param_2 == 0) {
    this = (void *)(**(code **)(*param_1 + 4))();
  }
  else {
    this = (void *)(**(code **)(*param_1 + 8))(param_2);
  }
  Serializer_appendString(this,param_1 + 1);
  Serializer_appendString(this,param_1 + 8);
  Serializer_appendString(this,param_1 + 0xf);
  Serializer_appendString(this,param_1 + 0x16);
  Serializer_appendInteger(this,(uint)*(byte *)(param_1 + 0x1d));
  STLVector_intPair_serialize(&stack0x00000000,(int)(param_1 + 0x1e));
  Serializer_appendInteger(this,(uint)*(byte *)(param_1 + 0x22));
  Serializer_appendInteger(this,(uint)*(byte *)((int)param_1 + 0x89));
  Serializer_appendInteger(this,(uint)*(byte *)((int)param_1 + 0x8a));
  Serializer_appendInteger(this,param_1[0x23]);
  Serializer_appendInteger(this,param_1[0x24]);
  (**(code **)(*param_1 + 0xc))(this);
  return;
}

