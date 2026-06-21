// addr: 0x01137f20
// name: btBvhTriangleMeshShape_refitTree
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall btBvhTriangleMeshShape_refitTree(int *param_1,int param_2,float *param_3)

{
  code *pcVar1;
  float *pfVar2;
  
                    /* Updates the mesh interface/quantized AABB state for btBvhTriangleMeshShape
                       and refits/rebuilds when the supplied AABB differs. */
  param_1[0x10] = param_2;
  pcVar1 = *(code **)(*param_1 + 0x18);
  *(undefined1 *)((int)param_1 + 0x49) = 0;
  pfVar2 = (float *)(*pcVar1)();
  if (DAT_01838430 <
      (*pfVar2 - *param_3) * (*pfVar2 - *param_3) +
      (pfVar2[2] - param_3[2]) * (pfVar2[2] - param_3[2]) +
      (pfVar2[1] - param_3[1]) * (pfVar2[1] - param_3[1])) {
    FUN_01152bb0(param_3);
  }
  return;
}

