// addr: 0x01008da0
// name: CaptureCommon_JPGEncodeJob_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CaptureCommon_JPGEncodeJob_ctor(void * this, void * jobRec) */

void * __thiscall CaptureCommon_JPGEncodeJob_ctor(void *this,void *jobRec)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CaptureCommon::JobT<VideoCapture::JPG::JPGEncodeJobRec>,
                       initializes its base job state, installs the template job vtable, and
                       stores/copies the job record. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01632c03;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0083f1e0(0);
  local_4 = 0;
  *(undefined ***)this = CaptureCommon::JobT<VideoCapture::JPG::JPGEncodeJobRec>::vftable;
  FUN_01008900(jobRec);
  ExceptionList = local_c;
  return this;
}

