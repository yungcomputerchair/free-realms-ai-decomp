// addr: 0x0100fb00
// name: FUN_0100fb00
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * init_video_frame_header(undefined4 * out, int timing_, int dims_,
   int previous_) */

undefined4 * __thiscall
init_video_frame_header(void *this,undefined4 *out,int timing_,int dims_,int previous_)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
                    /* Builds a 0x38-byte video/frame header from a template, computes a microsecond
                       timing value, sets format fields, accumulates an offset from previous frame,
                       and copies dimensions. Exact class identity is not evident. */
  uVar1 = DAT_01cb60a4;
  puVar4 = &DAT_0187d060;
  puVar5 = this;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)this = uVar1;
  *(undefined4 *)((int)this + 4) = 0x38;
  if (out[6] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)(out[5] * 1000000) / (uint)out[6];
  }
  *(uint *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0x10) = 2;
  *(undefined4 *)((int)this + 0x14) = 0x10;
  iVar3 = out[10];
  *(int *)((int)this + 0x24) = iVar3;
  if (dims_ != 0) {
    *(int *)((int)this + 0x24) = *(int *)(dims_ + 0x28) + iVar3;
  }
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(timing_ + 4);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(timing_ + 8);
  return this;
}

