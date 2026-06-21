// addr: 0x013ee5e0
// name: FUN_013ee5e0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013ee5e0(int *param_1,void *param_2)

{
                    /* Serializes/dumps an unknown command by invoking a base helper, appending
                       three strings, an integer, a byte flag, and another integer, then closing the
                       virtual serializer scope. Context lacks class-identifying strings or RTTI. */
  (**(code **)(*param_1 + 8))(param_2);
  GatewayCommand_serialize(param_1,param_2);
  Serializer_appendString(param_2,param_1 + 1);
  Serializer_appendString(param_2,param_1 + 8);
  Serializer_appendString(param_2,param_1 + 0xf);
  Serializer_appendInteger(param_2,param_1[0x16]);
  Serializer_appendInteger(param_2,(uint)*(byte *)(param_1 + 0x17));
  Serializer_appendInteger(param_2,param_1[0x18]);
  (**(code **)(*param_1 + 0xc))(param_2);
  return;
}

