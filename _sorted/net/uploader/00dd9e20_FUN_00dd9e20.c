// addr: 0x00dd9e20
// name: FUN_00dd9e20
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void FUN_00dd9e20(int width_, int height_, int mode_, float xScale_, float
   yScale_) */

void FUN_00dd9e20(int width_,int height_,int mode_,float xScale_,float yScale_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Clamps two integer dimensions to 0..0x4000 and two float scale values to a
                       global min/max before forwarding to FUN_00dec780 under an exception frame. No
                       uploader-specific evidence is present; likely a misclassified graphics/helper
                       wrapper. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0161c278;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x14))(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  uStack_4 = 0;
  if (width_ < 1) {
    width_ = 0;
  }
  else if (0x3fff < width_) {
    width_ = 0x4000;
  }
  if (height_ < 1) {
    height_ = 0;
  }
  else if (0x3fff < height_) {
    height_ = 0x4000;
  }
  if (_DAT_017ebf0c < xScale_) {
    if (DAT_017f0250 <= xScale_) {
      xScale_ = DAT_017f0250;
    }
  }
  else {
    xScale_ = _DAT_017ebf0c;
  }
  if (_DAT_017ebf0c < yScale_) {
    if (DAT_017f0250 <= yScale_) {
      yScale_ = DAT_017f0250;
    }
  }
  else {
    yScale_ = _DAT_017ebf0c;
  }
  FUN_00dec780(width_,height_,mode_,xScale_,yScale_);
  uStack_4 = 0xffffffff;
  (**(code **)(*(int *)PTR_DAT_01b85ac0 + 0x18))();
  ExceptionList = local_c;
  return;
}

