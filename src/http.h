#pragma once

typedef enum { UNKNOWN, GET, POST, HEAD } http_method;
typedef struct {
	http_method method;
	char* path;
	char* version;
} http_request;

typedef struct {
	int status_code;
	const char* content_type;
	const char* body;
} http_response;

int http_parse_request(char* req, http_request* request);
char* http_generate_response(const http_response* response);
