// addr: 0x00dc59d0
// name: FUN_00dc59d0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_00dc59d0(int param_1,int param_2,int param_3,int param_4,float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
                    /* Falls back to a full viewport/rectangle when a setup helper fails, using
                       dimensions from an object at offset 0x304 and marking a dirty flag. No class
                       evidence is available. */
  bVar3 = FUN_00de3f50(*(void **)(param_1 + 0x304),param_2,param_3,param_4,param_5,param_6);
  if (!bVar3) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x304) + 0x1c0);
    iVar2 = *(int *)(*(int *)(param_1 + 0x304) + 0x1bc);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(float *)(param_1 + 0x6c) = (float)iVar2;
    *(float *)(param_1 + 0x74) = (float)iVar1;
    *(byte *)(param_1 + 0x308) = *(byte *)(param_1 + 0x308) | 4;
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x74);
  }
  return;
}

