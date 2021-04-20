

typedef struct files_write_info
{
    struct file *_file;
    long uid;
    struct files_write_info *next;
} files_write_info;

void Access_control_system(struct file *file);
int insert_files_write_info(struct file *_file, long uid);
int is_the_first_time_changing_file(long uid);
files_write_info *create_fl_wr_info_obj(struct file *__file, long uid);
void print_fl_wr_info_list();
files_write_info *get_last_modification_object();

extern files_write_info *root_fl_wr_info;
