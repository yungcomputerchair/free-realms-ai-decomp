// addr: 0x0105d5c0
// name: FUN_0105d5c0
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0105d5c0(int param_1)

{
                    /* Computes a 32-bit hash/key from two adjacent dwords at +0x20/+0x24 and
                       forwards the object to FUN_00ab0230. Semantics are unclear without the callee
                       name. */
  FUN_00ab0230(*(uint *)(param_1 + 0x24) ^ *(uint *)(param_1 + 0x20),param_1);
  return;
}

