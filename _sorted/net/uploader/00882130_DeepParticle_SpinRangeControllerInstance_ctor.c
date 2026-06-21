// addr: 0x00882130
// name: DeepParticle_SpinRangeControllerInstance_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * DeepParticle_SpinRangeControllerInstance_ctor(void * this) */

void * __thiscall DeepParticle_SpinRangeControllerInstance_ctor(void *this)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  void *in_stack_00000004;
  void *in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a DeepParticle_SpinRangeControllerInstance object: runs its base
                       constructor, installs the DeepParticle_SpinRangeControllerInstance vtable,
                       and initializes owned fields. It allocates a per-particle float array and
                       fills it with randomized spin values from controller ranges. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01576b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  DeepParticle_ParticleControllerInstance_ctor(this,in_stack_00000004,in_stack_00000008);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = DeepParticle::SpinRangeControllerInstance::vftable;
  cVar3 = *(char *)((int)in_stack_00000008 + 0x18);
  iVar9 = *(int *)(*(int *)((int)in_stack_00000004 + 0x148) + 0x24);
  fVar1 = *(float *)(iVar9 + *(short *)((int)in_stack_00000008 + 0x12) * 4);
  uVar12 = *(int *)((int)in_stack_00000004 + 0x98) * 4 >> 0x11;
  fVar2 = *(float *)(iVar9 + *(short *)((int)in_stack_00000008 + 0x16) * 4);
  pvVar8 = Mem_Alloc(-(uint)((int)((ulonglong)uVar12 * 4 >> 0x20) != 0) |
                     (uint)((ulonglong)uVar12 * 4));
  fVar7 = _DAT_017e98c8;
  fVar6 = DAT_01762a34;
  fVar5 = _DAT_0175b420;
  *(void **)((int)this + 0x20) = pvVar8;
  iVar9 = 0;
  if (3 < (int)uVar12) {
    fVar13 = fVar2 - fVar1;
    do {
      uVar10 = *(int *)((int)in_stack_00000004 + 0x88) * 0x7ff8a3ed + 0x2aa01d31;
      *(uint *)((int)in_stack_00000004 + 0x88) = uVar10;
      if ((((uVar10 >> 0x10) * 2 & 0xffff0000) == 0) || (cVar3 == '\0')) {
        in_stack_00000008 = (void *)fVar5;
      }
      else {
        in_stack_00000008 = (void *)fVar6;
      }
      iVar11 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
      *(int *)((int)in_stack_00000004 + 0x88) = iVar11;
      fVar4 = (float)iVar11;
      if (iVar11 < 0) {
        fVar4 = fVar4 + _DAT_0175db04;
      }
      *(float *)(*(int *)((int)this + 0x20) + iVar9 * 4) =
           (fVar4 * fVar7 * fVar13 + fVar1) * (float)in_stack_00000008;
      uVar10 = *(int *)((int)in_stack_00000004 + 0x88) * 0x7ff8a3ed + 0x2aa01d31;
      *(uint *)((int)in_stack_00000004 + 0x88) = uVar10;
      if ((((uVar10 >> 0x10) * 2 & 0xffff0000) == 0) || (cVar3 == '\0')) {
        in_stack_00000008 = (void *)fVar5;
      }
      else {
        in_stack_00000008 = (void *)fVar6;
      }
      iVar11 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
      *(int *)((int)in_stack_00000004 + 0x88) = iVar11;
      fVar4 = (float)iVar11;
      if (iVar11 < 0) {
        fVar4 = fVar4 + _DAT_0175db04;
      }
      *(float *)(*(int *)((int)this + 0x20) + 4 + iVar9 * 4) =
           (fVar4 * fVar7 * fVar13 + fVar1) * (float)in_stack_00000008;
      uVar10 = *(int *)((int)in_stack_00000004 + 0x88) * 0x7ff8a3ed + 0x2aa01d31;
      *(uint *)((int)in_stack_00000004 + 0x88) = uVar10;
      if ((((uVar10 >> 0x10) * 2 & 0xffff0000) == 0) || (cVar3 == '\0')) {
        in_stack_00000008 = (void *)fVar5;
      }
      else {
        in_stack_00000008 = (void *)fVar6;
      }
      iVar11 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
      *(int *)((int)in_stack_00000004 + 0x88) = iVar11;
      fVar4 = (float)iVar11;
      if (iVar11 < 0) {
        fVar4 = fVar4 + _DAT_0175db04;
      }
      *(float *)(*(int *)((int)this + 0x20) + 8 + iVar9 * 4) =
           (fVar4 * fVar7 * fVar13 + fVar1) * (float)in_stack_00000008;
      uVar10 = *(int *)((int)in_stack_00000004 + 0x88) * 0x7ff8a3ed + 0x2aa01d31;
      *(uint *)((int)in_stack_00000004 + 0x88) = uVar10;
      if ((((uVar10 >> 0x10) * 2 & 0xffff0000) == 0) || (cVar3 == '\0')) {
        in_stack_00000008 = (void *)fVar5;
      }
      else {
        in_stack_00000008 = (void *)fVar6;
      }
      iVar11 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
      *(int *)((int)in_stack_00000004 + 0x88) = iVar11;
      fVar4 = (float)iVar11;
      if (iVar11 < 0) {
        fVar4 = fVar4 + _DAT_0175db04;
      }
      iVar9 = iVar9 + 4;
      *(float *)(*(int *)((int)this + 0x20) + -4 + iVar9 * 4) =
           (fVar4 * fVar7 * fVar13 + fVar1) * (float)in_stack_00000008;
    } while (iVar9 < (int)(uVar12 - 3));
  }
  if (iVar9 < (int)uVar12) {
    do {
      uVar10 = *(int *)((int)in_stack_00000004 + 0x88) * 0x7ff8a3ed + 0x2aa01d31;
      *(uint *)((int)in_stack_00000004 + 0x88) = uVar10;
      if ((((uVar10 >> 0x10) * 2 & 0xffff0000) == 0) || (cVar3 == '\0')) {
        in_stack_00000008 = (void *)fVar5;
      }
      else {
        in_stack_00000008 = (void *)fVar6;
      }
      iVar11 = uVar10 * 0x7ff8a3ed + 0x2aa01d31;
      *(int *)((int)in_stack_00000004 + 0x88) = iVar11;
      fVar13 = (float)iVar11;
      if (iVar11 < 0) {
        fVar13 = fVar13 + _DAT_0175db04;
      }
      iVar9 = iVar9 + 1;
      *(float *)(*(int *)((int)this + 0x20) + -4 + iVar9 * 4) =
           (fVar13 * fVar7 * (fVar2 - fVar1) + fVar1) * (float)in_stack_00000008;
    } while (iVar9 < (int)uVar12);
  }
  ExceptionList = local_c;
  return this;
}

