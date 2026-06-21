// addr: 0x00808a80
// name: TwoTrackBlend_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TwoTrackBlend_ctor(void * blend, void * trackA, void * trackB, int
   blendMode_) */

void * __thiscall
TwoTrackBlend_ctor(void *this,void *blend,void *trackA,void *trackB,int blendMode_)

{
  void *source;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs two embedded track/state objects and stores an additional
                       mode/value at offset 0x80. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01567983;
  local_c = ExceptionList;
  source = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  SkyDefinition_Horizon_copyCtor(this,blend,source);
  local_4 = 0;
  SkyDefinition_Horizon_copyCtor((void *)((int)this + 0x40),trackA,source);
  *(void **)((int)this + 0x80) = trackB;
  ExceptionList = local_c;
  return this;
}

