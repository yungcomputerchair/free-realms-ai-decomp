// addr: 0x00793650
// name: FloatKeyTree_sampleWrappedPair
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void FloatKeyTree_sampleWrappedPair(void * tree, void * outSample, float key_)
    */

void __thiscall FloatKeyTree_sampleWrappedPair(void *this,void *tree,void *outSample,float key_)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float *unaff_EDI;
  float fVar9;
  
                    /* Wraps a float key into a fixed period, finds neighboring key nodes in a
                       float-key tree, and writes the two records plus interpolation fraction to
                       outSample. */
  CRT_floor((double)((float)outSample * _DAT_017ed854));
  iVar6 = FUN_00d83c90();
  outSample = (void *)((float)outSample - (float)iVar6 * DAT_017ed850);
  puVar7 = FloatKeyTree_findFloorNode(this,&outSample,unaff_EDI);
  fVar4 = DAT_017ed850;
  if (puVar7 == (undefined4 *)0x0) {
    puVar8 = *(undefined4 **)((int)this + 4);
    puVar7 = (undefined4 *)0x0;
    while (puVar3 = puVar8, puVar3 != (undefined4 *)0x0) {
      puVar7 = puVar3;
      puVar8 = (undefined4 *)puVar3[4];
    }
  }
  puVar8 = (undefined4 *)puVar7[4];
  fVar1 = (float)puVar7[1];
  if (puVar8 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)puVar7[2];
    puVar3 = puVar7;
    while ((puVar8 = puVar5, puVar8 != (undefined4 *)0x0 && ((undefined4 *)puVar8[4] == puVar3))) {
      puVar3 = puVar8;
      puVar5 = (undefined4 *)puVar8[2];
    }
  }
  else {
    for (puVar3 = (undefined4 *)puVar8[3]; puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)puVar3[3]) {
      puVar8 = puVar3;
    }
  }
  if (puVar8 == (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)((int)this + 4);
    while (puVar5 = puVar3, puVar5 != (undefined4 *)0x0) {
      puVar8 = puVar5;
      puVar3 = (undefined4 *)puVar5[3];
    }
  }
  fVar2 = (float)puVar8[1];
  fVar9 = (float)((float)outSample < fVar1) * DAT_017ed850;
  *(undefined4 *)tree = *puVar7;
  *(undefined4 *)((int)tree + 4) = *puVar8;
  *(float *)((int)tree + 8) =
       ((fVar9 + (float)outSample) - fVar1) / (((float)(fVar2 <= fVar1) * fVar4 + fVar2) - fVar1);
  return;
}

