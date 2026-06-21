// addr: 0x00dbdbe0
// name: FUN_00dbdbe0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void submitClampedRenderRect(int x_, int y_, void * arg, float u_, float v_)
    */

void submitClampedRenderRect(int x_,int y_,void *arg,float u_,float v_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clamps coordinates to 0..0x4000 and floats to a valid range before
                       dispatching through a render/graphics path, or falls back to an alternate
                       implementation when the global path is disabled. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161ade8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_01bf3db4 == 0) {
    FUN_00dd9e20(x_,y_,(int)arg,u_,v_);
    ExceptionList = local_c;
    return;
  }
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x1c))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  uStack_4 = 0;
  if (x_ < 1) {
    x_ = 0;
  }
  else if (0x3fff < x_) {
    x_ = 0x4000;
  }
  if (y_ < 1) {
    y_ = 0;
  }
  else if (0x3fff < y_) {
    y_ = 0x4000;
  }
  if (_DAT_017ebf0c < u_) {
    if (DAT_017f0250 <= u_) {
      u_ = DAT_017f0250;
    }
  }
  else {
    u_ = _DAT_017ebf0c;
  }
  if (_DAT_017ebf0c < v_) {
    if (DAT_017f0250 <= v_) {
      v_ = DAT_017f0250;
    }
  }
  else {
    v_ = _DAT_017ebf0c;
  }
  FUN_00dc59d0(x_,y_,arg,u_,v_);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b854b0 + 0x20))();
  ExceptionList = local_c;
  return;
}

