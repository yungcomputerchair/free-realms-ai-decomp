// addr: 0x013881b0
// name: EvaluationEnvironment_setTargetFromPlayAreaTarget
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EvaluationEnvironment_setTargetFromPlayAreaTarget(void * this, int
   targetKind_, int elementId_) */

void __thiscall
EvaluationEnvironment_setTargetFromPlayAreaTarget(void *this,int targetKind_,int elementId_)

{
  int value_;
  void *pvVar1;
  int unaff_EDI;
  
                    /* Maps a play-area target kind to the appropriate EvaluationEnvironment target
                       slot or return-map key, logging unknown targets. */
  value_ = elementId_;
  EvaluationEnvironment_tracef(this,"SetTargetFromPlayAreaTarget: %d, %d",targetKind_);
  if (targetKind_ < 0x38) {
    if (targetKind_ != 0x37) {
      if (targetKind_ == 1) {
        *(int *)((int)this + 0xc) = value_;
        return;
      }
      if (targetKind_ == 2) {
        *(int *)((int)this + 0x10) = value_;
        return;
      }
      if (targetKind_ == 0x30) {
        set_integer_value_for_key(0x21,value_);
        return;
      }
LAB_01388221:
      EvaluationEnvironment_tracef(this,"UNKNOWN target!",unaff_EDI);
      return;
    }
    elementId_ = 0x27;
  }
  else if (targetKind_ == 0x422) {
    elementId_ = 0x36;
  }
  else {
    if (targetKind_ != 0x423) goto LAB_01388221;
    elementId_ = 0x37;
  }
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue(&elementId_,unaff_EDI);
  FUN_01300680(2);
  *(int *)((int)pvVar1 + 8) = value_;
  return;
}

