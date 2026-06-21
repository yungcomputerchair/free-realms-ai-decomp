// addr: 0x00919b60
// name: FUN_00919b60
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00919b60(void *param_1,int param_2)

{
                    /* Serializes or deserializes five packet-definition fields; direction/type
                       unclear from context. */
  deserialize_hash_list(param_1,(void *)(param_2 + 0x130));
  FUN_008e5580(param_1,param_2 + 0x50);
  FUN_008e56c0(param_1,param_2 + 0x88);
  FUN_0090a070(param_1,(void *)(param_2 + 0xc0));
  FUN_008e5800(param_1,param_2 + 0xf8);
  return;
}

