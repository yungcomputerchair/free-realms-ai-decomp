// addr: 0x0051898a
// name: DERWriter_writeSignedInteger64
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DERWriter_writeSignedInteger64(void * writer, uint lowDword_, uint
   highDword_) */

void DERWriter_writeSignedInteger64(void *writer,uint lowDword_,uint highDword_)

{
  uint highDword__00;
  undefined1 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  
                    /* Chooses the shortest signed integer encoding size for a 64-bit value, handles
                       special 0/1/-1 cases, and forwards the tag/length/value bytes to a writer
                       helper. */
  highDword__00 = highDword_;
  if (lowDword_ == 0 && highDword_ == 0) {
    uVar4 = 2;
  }
  else if ((lowDword_ == 1) && (highDword_ == 0)) {
    uVar4 = 3;
  }
  else {
    if ((lowDword_ & highDword_) != 0xffffffff) {
      uVar1 = (undefined1)lowDword_;
      if ((highDword_ + (0xffffff7f < lowDword_) == 0) && (lowDword_ + 0x80 < 0x100)) {
        puVar5 = (uint *)((int)&highDword_ + 3);
        uVar3 = 1;
        highDword_ = CONCAT13(uVar1,(undefined3)highDword_);
        uVar4 = 6;
      }
      else if ((highDword_ + (0xffff7fff < lowDword_) == 0) && (lowDword_ + 0x8000 < 0x10000)) {
        highDword_ = CONCAT31(highDword_._1_3_,uVar1);
        lVar2 = __allshr(8,highDword__00);
        highDword_._0_2_ = CONCAT11((char)lVar2,(undefined1)highDword_);
        puVar5 = &highDword_;
        uVar3 = 2;
        uVar4 = 8;
      }
      else if (highDword_ + (0x7fffffff < lowDword_) == 0) {
        highDword_ = CONCAT31(highDword_._1_3_,uVar1);
        lVar2 = __allshr(8,highDword__00);
        highDword_._0_2_ = CONCAT11((char)lVar2,(undefined1)highDword_);
        lVar2 = __allshr(0x10,highDword__00);
        highDword_._0_3_ = CONCAT12((char)lVar2,(undefined2)highDword_);
        lVar2 = __allshr(0x18,highDword__00);
        highDword_ = CONCAT13((char)lVar2,(undefined3)highDword_);
        puVar5 = &highDword_;
        uVar3 = 4;
        uVar4 = 10;
      }
      else {
        lVar2 = __allshr(8,highDword_);
        lowDword_._0_2_ = CONCAT11((char)lVar2,(undefined1)lowDword_);
        lVar2 = __allshr(0x10,highDword__00);
        lowDword_._0_3_ = CONCAT12((char)lVar2,(undefined2)lowDword_);
        lVar2 = __allshr(0x18,highDword__00);
        lowDword_ = CONCAT13((char)lVar2,(undefined3)lowDword_);
        puVar5 = &lowDword_;
        uVar3 = 8;
        uVar4 = 0xc;
        highDword_ = highDword__00;
      }
      goto LAB_00518ada;
    }
    uVar4 = 4;
  }
  puVar5 = (uint *)0x0;
  uVar3 = 0;
  highDword_ = highDword__00;
LAB_00518ada:
  FUN_00518633(writer,uVar4,uVar3,puVar5);
  return;
}

