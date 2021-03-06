enum dtype_record_define {
	TYPE(RECORD_DEFINE)=0x3210
};
enum subtype_record_define {
	SUBTYPE(RECORD_DEFINE,RECORD)=0x1,
	SUBTYPE(RECORD_DEFINE,READ),
	SUBTYPE(RECORD_DEFINE,WRITE)
};

typedef struct record_define_record{
	char * record_no;
	char * shopkeeper_info;
	char * intermed_info;
	char * customer_info;
	char * list_info;
}__attribute__((packed)) RECORD(RECORD_DEFINE,RECORD);

typedef struct record_define_read{
	char * record_no;
	char * list_info;
}__attribute__((packed)) RECORD(RECORD_DEFINE,READ);

typedef struct record_define_write{
	char * record_no;
	char * segment;
	char * text;
	char * list_info;
}__attribute__((packed)) RECORD(RECORD_DEFINE,WRITE);
